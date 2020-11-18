#!/usr/bin/node
/*
  Who was playing in this movie?
*/
const request = require('request');
const meurl = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2] + '/';

request(meurl, (error, response, body) => {
  const res = JSON.parse(body).characters;
  for (const urlchar of res) {
    request(urlchar, (error, response, body) => {
      const character = JSON.parse(body);
      console.log(character.name);
    });
  }
});

