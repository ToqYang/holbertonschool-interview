#!/usr/bin/python3
import sys
import re
import signal


def search_items(line, s):
    """ Search the items to positionate """
    txt = re.search("\s\d{3}\s\d{1,}", line)
    word = txt.group()
    word = word[1:]

    left = re.search("\d{3}\s", word)

    code = left.group()
    code = code[:-1]

    right = re.search("\s\d{1,}", word)

    size = right.group()
    size = size[1:]
    size = int(size)

    add_code(code, s)

    return size


def add_code(code, codes):
    """ Count the status code """
    for key, value in codes.items():
        if key == code:
            codes[key] += 1


def print_all(stat):
    """ Print all """
    status = sorted(stat)
    codes = sorted(stat.values())

    for x in range(0, len(status)):
        print("{:s}: {:d}".format(status[x], codes[x]))


if __name__ == "__main__":
    status = {"200": 0, "301": 0, "400": 0, "401": 0,
                "403": 0, "404": 0, "405": 0, "500": 0}
    file_size = 0
    i = 0

    try:
        for lines in sys.stdin:
            file_size += search_items(lines, status)

            if i % 10 == 0:
                print("File size: {:d}".format(file_size))
                print_all(status)
                status = dict.fromkeys(status, 0)

            i += 1
    except KeyboardInterrupt:
        print("File size: {:d}".format(file_size))
        print_all(status)
        sys.exit(0)
