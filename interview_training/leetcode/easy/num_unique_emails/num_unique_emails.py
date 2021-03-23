def num_unique_emails(emails):
    unique_emails = set()
    
    for email in emails:
        [local, domain] = email.split('@')
        splitted_local = local.split('+')
        new_local = ''.join(splitted_local[0].split('.'))
        unique_emails.add(new_local + '@' + domain)
        
    return len(unique_emails)