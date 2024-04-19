import { useState } from 'react';

function useStateWithHistory(initialState) {
  const [history, setHistory] = useState(
    [null, undefined].includes(initialState) ? [] : [initialState]
  );
  const [value, setValue] = useState(initialState);
  const [index, setIndex] = useState(0);

  const updateHistory = (newValue) => {
    setHistory([...history, newValue]);
    setValue(newValue);
    setIndex(history.length);
  };

  const goBack = () => {
    if (index > 0) {
      setValue(history[index - 1]);
      setIndex(index - 1);
    }
  };

  const goForward = () => {
    if (index < history.length - 1) {
      setValue(history[index + 1]);
      setIndex(index + 1);
    }
  };

  return [value, updateHistory, goBack, goForward, history];
}
