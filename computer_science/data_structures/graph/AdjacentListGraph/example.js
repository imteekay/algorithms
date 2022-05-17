import { addNode, addEdge, bfs, dfs } from './AdjacentListGraph.js';

const airports = [
  'PHX',
  'BKK',
  'JFK',
  'LIM',
  'MEX',
  'OKC',
  'LAX',
  'EZE',
  'HEL',
  'LOS',
  'LA',
];

const routes = [
  ['PHX', 'LA'],
  ['PHX', 'JFK'],
  ['JFK', 'OKC'],
  ['JFK', 'LOS'],
  ['JFK', 'HEL'],
  ['MEX', 'LA'],
  ['MEX', 'BKK'],
  ['MEX', 'LIM'],
  ['MEX', 'EZE'],
  ['LIM', 'BKK'],
];

const AdjacentListGraph = new Map();

for (let airport of airports) {
  addNode(AdjacentListGraph, airport);
}

for (let [origin, destination] of routes) {
  addEdge(AdjacentListGraph, origin, destination);
}

bfs(AdjacentListGraph, 'PHX');
dfs(AdjacentListGraph, 'PHX');
