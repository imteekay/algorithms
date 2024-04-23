import { useCallback } from 'react';

function useMap(initialValue) {
  const [map, setMap] = useState(new Map(initialValue));

  const set = useCallback((key, value) => {
    setMap((prevMap) => {
      const updatedMap = new Map(prevMap);
      updatedMap.set(key, value);
      return updatedMap;
    });
  }, []);

  const del = useCallback((key) => {
    setMap((prevMap) => {
      const updatedMap = new Map(prevMap);
      updatedMap.delete(key);
      return updatedMap;
    });
  }, []);

  const clear = useCallback(() => {
    setMap((prevMap) => {
      const updatedMap = new Map(prevMap);
      updatedMap.clear();
      return updatedMap;
    });
  }, []);

  return {
    map,
    set,
    delete: del,
    clear,
  };
}
