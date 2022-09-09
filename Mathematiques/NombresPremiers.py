def main():
    print("Lancement du programme...")
    x = int(input("Entrez le nombre maximum à tester: "))

    for k in range(2, x):

        i = k / 2
        if not i.is_integer():
            b = k / 3
            if not b.is_integer():
                c = k / 5
                if not c.is_integer():
                    d = k / 7
                    if not d.is_integer():
                        print(k)


if __name__ == '__main__':
    main()
