from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad

# Encryption function
def encrypt(message, key):
    cipher = AES.new(key, AES.MODE_ECB)
    padded_msg = pad(message.encode(), 16)
    encrypted = cipher.encrypt(padded_msg)
    return encrypted

# Decryption function
def decrypt(cipher_text, key):
    cipher = AES.new(key, AES.MODE_ECB)
    decrypted = unpad(cipher.decrypt(cipher_text), 16)
    return decrypted.decode()

# Main program
if __name__ == "__main__":
    key = b'1234567890123456'  # 16 bytes = 128-bit key
    message = input("Enter message: ")

    encrypted = encrypt(message, key)
    print("Encrypted (bytes):", encrypted.hex())

    decrypted = decrypt(encrypted, key)
    print("Decrypted message:", decrypted)