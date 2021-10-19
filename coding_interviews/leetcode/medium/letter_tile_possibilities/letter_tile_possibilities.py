# https://leetcode.com/problems/letter-tile-possibilities

def num_tile_possibilities(tiles):
    res = set()

    def dfs(path, tile):
        if path not in res:
            if path: res.add(path)
            for i in range(len(tile)):
                dfs(path + tile[i], tile[:i] + tile[i+1:])
            
    dfs('', tiles)

    return len(res)
