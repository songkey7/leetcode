#/usr/bin/python
#-*- coding:utf-8 -*-

# -------------------------------------------------------------------------------
# Filename:    scrapy.py
# Version:     1.0
# Date:        2018-06-05 15:42:25
# Author:      songkey
# Brief:
# -------------------------------------------------------------------------------

import sys
import urllib2
import urllib
import json

url_problems="https://leetcode.com/api/problems/algorithms/"
url_favorite='https://leetcode.com/graphql?query=query%20getLikesAndFavorites(%24titleSlug%3A%20String!)%20%7B%0A%20%20question(titleSlug%3A%20%24titleSlug)%20%7B%0A%20%20%20%20likes%0A%20%20%20%20dislikes%0A%20%20%20%20isLiked%0A%20%20%7D%0A%20%20favoritesLists%0A%7D%0A&operationName=getLikesAndFavorites&variables=%7B%22titleSlug%22%3A%22########%22%7D'

headers = {
    'accept': '*/*',
    'accept-language': 'zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7',
    'content-type': 'application/json, text/plain',
    'user-agent':'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_13_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/66.0.3359.181 Safari/537.36',
    'cookie':'__cfduid=db7950acd691b6a5115267004fffdf0db1506043357; _ga=GA1.2.545489547.1504057671; __stripe_mid=5552aaa0-2274-468c-b034-632449e35cf1; _gid=GA1.2.666150874.1527937736; csrftoken=FAJtfdAjAOUNzoA4WUnUl7NbIdSWmh0qgG9nCx2Tezzlv1r7jQj0KojpIfUslYj2; LEETCODE_SESSION=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJfYXV0aF91c2VyX2lkIjoiMzkyMDY5IiwiX2F1dGhfdXNlcl9iYWNrZW5kIjoiYWxsYXV0aC5hY2NvdW50LmF1dGhfYmFja2VuZHMuQXV0aGVudGljYXRpb25CYWNrZW5kIiwiX2F1dGhfdXNlcl9oYXNoIjoiMWRjNTMxZWFmZDY3NmJiNDE4NDllYTQ5Y2EzNDQ5NDhmMGM5YjU0NCIsImlkIjozOTIwNjksImVtYWlsIjoic29uZ2tleTAxMjlAZ21haWwuY29tIiwidXNlcm5hbWUiOiJzb25na2V5NyIsInVzZXJfc2x1ZyI6InNvbmdrZXk3IiwiYXZhdGFyIjoiaHR0cHM6Ly9zMy1sYy11cGxvYWQuczMuYW1hem9uYXdzLmNvbS91c2Vycy9zb25na2V5Ny9hdmF0YXJfMTUyNjY4NTgxMS5wbmciLCJ0aW1lc3RhbXAiOiIyMDE4LTA2LTAyIDExOjA5OjAyLjE2ODMwOSswMDowMCIsIlJFTU9URV9BRERSIjoiMTIzLjExOC4xNzUuMjA3IiwiSURFTlRJVFkiOiJkZjk2NDRjMTBjZDcxOTE2NDNhNTRkMzZkYzVlYmRjZiIsIl9zZXNzaW9uX2V4cGlyeSI6MH0.3QgeDSS-8tXYpFJXbeQn-mFiOBZdgT41OTHr8KK0tcQ; __atuvc=38%7C19%2C30%7C20%2C4%7C21%2C0%7C22%2C19%7C23; _gat=1',
    'referer': 'https://leetcode.com/problems/shortest-path-visiting-all-nodes/description/',
    'x-newrelic-id': 'UAQDVFVRGwEAXVlbBAg=',
    'x-requested-with': 'XMLHttpRequest',
    'x-csrftoken': 'FAJtfdAjAOUNzoA4WUnUl7NbIdSWmh0qgG9nCx2Tezzlv1r7jQj0KojpIfUslYj2'
}

request = urllib2.Request(url_problems, headers=headers)
res = urllib2.urlopen(request).read()
res = json.loads(res)
with open('problems.txt', 'w') as fout:
    for item in res['stat_status_pairs']:
        id = item['stat']['frontend_question_id']
        name = item['stat']['question__title']
        slug = item['stat']['question__title_slug']
        accept = item['stat']['total_acs']
        submit = item['stat']['total_submitted']
        difficulty = item['difficulty']['level']
        like = ""
        dislike = ""
        try:
            url = url_favorite.replace('########', slug)
            request2 = urllib2.Request(url, headers=headers)
            res2 = urllib2.urlopen(request2).read()
            res2 = json.loads(res2)['data']
            like = res2['question']['likes']
            dislike = res2['question']['dislikes']
        except:
            print name
        out = [id, name, slug, difficulty, like, dislike, accept, submit]
        fout.write('\t'.join(map(str,out)) + '\n')

