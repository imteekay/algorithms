var app = angular.module('algorithm', []);

app.controller('AlgorithmController', ['$scope', function($scope) {

  $scope.cppFeatures = [
    {
      'title': 'C++ Vector: A pretty simple guide',
      'hasMediumPost': true,
      'mediumPostUrl': 'https://medium.com/@leandrotk_/c-standard-template-library-stl-vector-a-pretty-simple-guide-d2b64184d50b#.5aquqmuns',
      'hasGithubCode': true,
      'githubCodeUrl': 'https://github.com/LeandroTk/algorithms/blob/gh-pages/cpp/standard_template_library/vectors.cpp',
      'studied': true
    }
  ];

}]);
