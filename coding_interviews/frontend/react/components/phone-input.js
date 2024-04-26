import React, { useState } from 'react';

export default function PhoneInput() {
  const [phoneNumber, setPhoneNumber] = useState('');
  const isPhoneNumberComplete = phoneNumber.length === 14;

  const formatAddingNumber = (key) => {
    if (phoneNumber.length === 0) {
      return `(${key}`;
    }

    if (phoneNumber.length === 4) {
      return `${phoneNumber}) ${key}`;
    }

    if (phoneNumber.length === 9) {
      return `${phoneNumber}-${key}`;
    }

    if (isPhoneNumberComplete) {
      return phoneNumber;
    }

    return phoneNumber + key;
  };

  const formatRemovingNumber = () => {
    if (phoneNumber.length === 2) {
      return '';
    }

    if (phoneNumber.length === 7) {
      return phoneNumber.slice(0, phoneNumber.length - 3);
    }

    if (phoneNumber.length === 11) {
      return phoneNumber.slice(0, phoneNumber.length - 2);
    }

    return phoneNumber.slice(0, phoneNumber.length - 1);
  };

  const handleOnKeyDown = (e) => {
    const isNumber = /^[0-9]$/i.test(e.key);

    if (isNumber) {
      setPhoneNumber(formatAddingNumber(e.key));
    }

    if (['Backspace', 'Delete'].includes(e.key)) {
      setPhoneNumber(formatRemovingNumber());
    }
  };

  const handleOnClick = (e) => {
    setPhoneNumber('');
  };

  return (
    <>
      <input
        type="tel"
        placeholder="(555) 555-5555"
        value={phoneNumber}
        onKeyDown={handleOnKeyDown}
      />
      <button disabled={!isPhoneNumberComplete} onClick={handleOnClick}>
        Submit
      </button>
    </>
  );
}
