// Runtime: O(n), n being the number of competition
// Space: O(k), k being the number of teams

function tournamentWinner(competitions, results) {
  let teams = new Map();
  let maxPoints = 0;
  let winner;

  for (let index = 0; index < competitions.length; index++) {
    let competition = competitions[index];
    let result = results[index];
    let team = result === 1 ? competition[0] : competition[1];
    let points = (teams.get(team) || 0) + 3;

    teams.set(team, points);

    if (points > maxPoints) {
      winner = team;
      maxPoints = points;
    }
  }

  return winner;
}
