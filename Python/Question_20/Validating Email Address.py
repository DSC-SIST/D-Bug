def check_valid(email):
    try:
        username, url = email
        website, extension = url.split(".")
    except ValueError:
        return False

    if not username.replace("-", "").replace("_", ""):
        return False
    if not website.isalnum():
        return False
    if len(extension) > 3:
        return False
    return True


n = input()
emails = [input() for email in range(n)]

valid = list(filter(check_valid, emails))
print(sorted(valid))