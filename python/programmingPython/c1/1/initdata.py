bob = {'name': 'Bob Smith', 'age': 43, 'pay': 33000.0, 'job': 'dev'}
sue = {'name': 'Sue Jones', 'age': 45, 'pay': 55000.0, 'job': 'hdw'}
tom = {'name': 'Tom Wili', 'age': 49, 'pay': 55000.1, 'job': 'writer'}

db = {}

db['bob'] = bob
db['sue'] = sue
db['tom'] = tom

if __name__ == '__main__':
    for key in db:
        print(key, '=>\n', db[key])
