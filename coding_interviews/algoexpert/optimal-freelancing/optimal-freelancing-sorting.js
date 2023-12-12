function sortJobs(jobs) {
  jobs.sort((job1, job2) => {
    if (job1.payment > job2.payment) return -1;
    if (job1.payment < job2.payment) return 1;
    return 0;
  });
}

function optimalFreelancing(jobs) {
  let profit = 0;
  let days = [0, 0, 0, 0, 0, 0, 0];

  sortJobs(jobs);

  for (let { deadline, payment } of jobs) {
    let maxTime = Math.min(deadline, 7);

    for (let time = maxTime; time >= 1; time--) {
      if (days[time - 1] === 0) {
        profit += payment;
        days[time - 1] = payment;
        break;
      }
    }
  }

  return profit;
}
