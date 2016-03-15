var app = angular.module('algorithm', []);

app.controller('AlgorithmsController', ['$scope', function($scope) {

  $scope.algorithms = [
    {
      'title': 'Bubble Sort',
      'hasMediumPost': false,
      'mediumPostUrl': '',
      'hasGithubCode': false,
      'githubCodeUrl': '',
      'studied': true
    },

    {
      'title': 'Insertion Sort',
      'hasMediumPost': false,
      'mediumPostUrl': '',
      'hasGithubCode': false,
      'githubCodeUrl': '',
      'studied': true
    },

    {
      'title': 'Selection Sort',
      'hasMediumPost': false,
      'mediumPostUrl': '',
      'hasGithubCode': false,
      'githubCodeUrl': '',
      'studied': true
    },

    {
      'title': 'Merge Sort',
      'hasMediumPost': false,
      'mediumPostUrl': '',
      'hasGithubCode': false,
      'githubCodeUrl': '',
      'studied': true
    },
  ];

}]);
