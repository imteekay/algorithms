// Given the sample response:

// data: {
//   items: [
//     {
//       id: 1,
//       name: "Nike Shoes",
//       price: 1000,
//       status: "on_sale",
//       photos: [{ large: 'xxx', thumbnail: 'yyy'}, { large: 'xxx', thumbnail: 'yyy'}]
//       verified: true,
//       ..
//     },
//     ...
//   ],
// }

// get/items

// 1. Construct a query which includes name, price, photos, & status
// 2. Using the query, bring the data in to RecommendedItems component
// 3. Render the UI for the recommended items list
// 4. Handle loading and error states within the component

import React from 'react';
import useQuery from 'react-query';

const fallBackImg = 'https/....';

const getThumbail = ({ photos }) =>
  (photos[0] && photos[0].thumbail) || fallBackImg;

const useItems = (limit) => {
  const { data } = useQuery(['items'], fetch(`/items?limit=${limit}`));

  return data.map((item) => ({
    ...item,
    thumbnail: getThumbail(item),
  }));
};

// items styles
// toCurrency()

function Item({ name, price, thumbnail }) {
  return (
    <>
      <img src={thumbail} alt={name} />
      <p>{name}</p>
      <p>{toCurrency(price)}</p>
    </>
  );
}

const WithLoadingErrorAndData = ({ isLoading, isError, children }) => {
  if (isLoading) return <Loading />;

  if (isError) return <Error />;

  return children;
};

// Component
function RecommendedItems({ limit, component }) {
  const { data, isLoading, isError } = useItems(limit);

  return (
    <WithLoadingErrorAndData isLoading={isLoading} isError={isError}>
      {data.items.map((item) => (
        <Item name={item.name} price={item.price} thumbnail={item.thumbail} />
      ))}
    </WithLoadingErrorAndData>
  );
}
