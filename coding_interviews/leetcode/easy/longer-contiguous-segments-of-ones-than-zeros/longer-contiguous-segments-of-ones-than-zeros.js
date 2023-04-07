function checkZeroOnes(s) {
  let zerosLongestContinuousSegment = 0;
  let onesLongestContinuousSegment = 0;
  let zerosContinuousSegment = 0;
  let onesContinuousSegment = 0;

  for (let index = 0; index < s.length; index++) {
    let char = s[index];

    if (char === '1') {
      zerosLongestContinuousSegment = Math.max(
        zerosLongestContinuousSegment,
        zerosContinuousSegment
      );
      zerosContinuousSegment = 0;
      onesContinuousSegment++;
    } else {
      onesLongestContinuousSegment = Math.max(
        onesLongestContinuousSegment,
        onesContinuousSegment
      );
      onesContinuousSegment = 0;
      zerosContinuousSegment++;
    }

    if (index === s.length - 1) {
      if (char === '1') {
        onesLongestContinuousSegment = Math.max(
          onesLongestContinuousSegment,
          onesContinuousSegment
        );
      } else {
        zerosLongestContinuousSegment = Math.max(
          zerosLongestContinuousSegment,
          zerosContinuousSegment
        );
      }
    }
  }

  return onesLongestContinuousSegment > zerosLongestContinuousSegment;
}
