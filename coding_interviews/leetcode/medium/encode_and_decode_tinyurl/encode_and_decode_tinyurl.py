# https://leetcode.com/problems/encode-and-decode-tinyurl

class Codec:
    count = 0
    tiny_to_url = {}
    url_to_tiny = {}
    tiny_url_prefix = 'http://tinyurl.com/'

    def encode(self, longUrl: str) -> str:
        if longUrl in self.url_to_tiny:
            return self.url_to_tiny[longUrl]

        tiny_url = self.tiny_url_prefix + str(self.count)
        self.url_to_tiny[longUrl] = tiny_url
        self.tiny_to_url[tiny_url] = longUrl
        self.count += 1
        return tiny_url

    def decode(self, shortUrl: str) -> str:
        return self.tiny_to_url[shortUrl]
