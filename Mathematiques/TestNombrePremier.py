def main():
    print("Lancement du programme...")
    a = int(input("Entrez un nombre: "))

    if a == 1 or a == 2 or a == 5 or a == 7:
        print("C'est un nombre premier.")

    i = a/2
    if not i.is_integer():
        b = a/3
        if not b.is_integer():
            c = a/5
            if not c.is_integer():
                d = a/7
                if not d.is_integer():
                    print("C'est un nombre premier.")


if __name__ == '__main__':
    main()