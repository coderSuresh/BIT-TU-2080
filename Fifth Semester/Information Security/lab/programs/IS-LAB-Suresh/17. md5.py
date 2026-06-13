import hashlib

# Function to generate MD5 hash
def generate_md5(message):
    result = hashlib.md5(message.encode())
    return result.hexdigest()

# Main program
if __name__ == "__main__":
    message = input("Enter message: ")

    md5_hash = generate_md5(message)
    print("MD5 Hash:", md5_hash)