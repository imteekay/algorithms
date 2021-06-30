const convertObjToArrayOfObjects = (data) =>
  Object.entries(data).map(([key, values]) => ({
    id: key,
    ...values,
  }));
