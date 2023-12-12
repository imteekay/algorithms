function optimalFreelancing(jobs) {
  let profit = 0;
  let day = 7;
  let completedJobs = new WeakSet();

  while (day > 0) {
    let bestJob;

    for (let job of jobs) {
      if (
        job.deadline >= day &&
        job.payment > (bestJob?.payment || 0) &&
        !completedJobs.has(job)
      ) {
        bestJob = job;
      }
    }

    day--;

    if (bestJob) {
      completedJobs.add(bestJob);
      profit += bestJob.payment;
    }
  }

  return profit;
}
