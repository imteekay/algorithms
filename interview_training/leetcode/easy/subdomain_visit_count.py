'''
https://leetcode.com/problems/subdomain-visit-count/description/

Example 1:
Input: ["9001 discuss.leetcode.com"]
Output: ["9001 discuss.leetcode.com", "9001 leetcode.com", "9001 com"]

Example 2:
Input: ["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"]
Output: ["901 mail.com", "50 yahoo.com", "900 google.mail.com", "5 wiki.org","5 org", "1 intel.mail.com", "951 com"]
'''

def update_subdomain_counter(sc, s, c):
    if s in sc:
        sc[s] += int(c)
    else:
        sc[s] = int(c)

def subdomain_visits(cpdomains):
    subdomain_counter = {}

    for cpdomain in cpdomains:
        code, subdomain = cpdomain.split(' ')
        update_subdomain_counter(subdomain_counter, subdomain, code)

        while subdomain.find(".") != -1:
            subdomain = subdomain.split('.', 1)[1]
            update_subdomain_counter(subdomain_counter, subdomain, code)

    return [str(counter) + " " + subdomain for subdomain, counter in subdomain_counter.items()]

print(subdomain_visits(["9001 discuss.leetcode.com"]))
print(subdomain_visits(["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"]))
