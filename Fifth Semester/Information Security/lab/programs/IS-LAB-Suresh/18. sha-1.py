import hashlib

# Function to generate SHA-1 hash
def generate_sha1(message):
    result = hashlib.sha1(message.encode())
    return result.hexdigest()

# Main program
if __name__ == "__main__":
    message = input("Enter message: ")
    sha1_hash = generate_sha1(message)
    print("SHA-1 Hash:", sha1_hash)