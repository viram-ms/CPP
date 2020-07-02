class RSA:
    def __init__(self, p, q):
        self.n = p * q
        self.pi_n = (p-1) * (q - 1)
        # find e
        self.e = 343
        self.d =  12007
        print("n : ",self.n," d : ",self.d," e : ",self.e)

    def encrypt_(self, list_num):
        return [ (each**self.e) % self.n for each in list_num]

    def encrypt(self, text):
        return self.encrypt_([(ord(letter) - 97) for letter in text.lower()])
    
    def decrypt_(self, list_num):
        return [ (each**self.d) % self.n for each in list_num]

    def decrypt(self, cipher):
        return "".join([chr(number + 97) for number in self.decrypt_(cipher)])

r = RSA(397, 401)
cipher = r.encrypt("NO")

print("Cipher Text : ", cipher)
print("Plain Text : ", r.decrypt(cipher))

