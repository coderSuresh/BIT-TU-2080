from Crypto.Cipher import DES
from Crypto.Util.Padding import pad, unpad

# Function for encryption
def encrypt(msg, key):
    cipher = DES.new(key, DES.MODE_ECB)
    padded_text = pad(msg.encode(), 8)
    encrypted_text = cipher.encrypt(padded_text)
    return encrypted_text

# Function for decryption
def decrypt(cipher_text, key):
    cipher = DES.new(key, DES.MODE_ECB)
    decrypted_text = unpad(cipher.decrypt(cipher_text), 8)
    return decrypted_text.decode()

# Main program
if __name__ == "__main__":
    key = b'8bytekey'   # Key must be 8 bytes
    message = input("Enter message: ")

    encrypted = encrypt(message, key)
    print("Encrypted (in bytes):", encrypted.hex())

    decrypted = decrypt(encrypted, key)
    print("Decrypted message:", decrypted)