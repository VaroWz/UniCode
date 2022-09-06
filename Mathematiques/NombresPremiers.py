def main():
    print("Lancement du programme...")
    x = int(input("Entrez le nombre maximum à tester: "))

    for k in range(2, x):

        i = k / 2
        if i.is_integer() == False:
            b = k / 3
            if b.is_integer() == False:
                c = k / 5
                if c.is_integer() == False:
                    d = k / 7
                    if d.is_integer() == False:
                        print(k)

if __name__ == '__main__':
    main()
