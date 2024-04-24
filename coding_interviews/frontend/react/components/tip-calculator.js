import React, { useState } from 'react';

export default function TipCalculator() {
  const [bill, setBill] = useState(50);
  const [tipPercentage, setTipPercentage] = useState(18);
  const [numberOfPeople, setNumberOfPeople] = useState(1);

  const presentPrice = (value) =>
    bill !== '' && tipPercentage !== '' ? `$${value.toFixed(2)}` : '-';

  const calculateTotalTip = () => (bill * tipPercentage) / 100;

  const calculateTipPerPerson = () => totalTip / numberOfPeople;

  const totalTip = calculateTotalTip();
  const tipPerPerson = calculateTipPerPerson();

  return (
    <>
      <label for="bill">Bill</label>
      <input
        id="bill"
        type="number"
        value={bill}
        onChange={(e) => setBill(e.target.value)}
      />
      <label for="tip-percentage">Tip Percentage</label>
      <input
        id="tip-percentage"
        type="number"
        value={tipPercentage}
        onChange={(e) => setTipPercentage(e.target.value)}
      />
      <label for="number-of-people">Number of People</label>
      <input
        id="number-of-people"
        type="number"
        value={numberOfPeople}
        onChange={(e) => setNumberOfPeople(e.target.value)}
      />

      <p>Total Tip: {presentPrice(totalTip)}</p>
      <p>Tip Per Person: {presentPrice(tipPerPerson)}</p>
    </>
  );
}
