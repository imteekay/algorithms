import { useEffect, useRef } from 'react';

function useInterval(callback, delay) {
  const callbackRef = useRef();

  useEffect(() => {
    callbackRef.current = callback;
  }, [callback]);

  useEffect(() => {
    const interval = setInterval(() => {
      callbackRef.current();
    }, delay);

    if ([null, undefined].includes(delay)) {
      clearInterval(interval);
    }

    return () => {
      clearInterval(interval);
    };
  }, [delay]);
}
