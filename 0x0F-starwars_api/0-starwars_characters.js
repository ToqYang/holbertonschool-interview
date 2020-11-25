#!/usr/bin/node
/*
  Who was playing in this movie?
*/

const argv = process.argv;
const urlMovie = `https://swapi-api.hbtn.io/api/films/${argv[2]}/`;
const request = require('request');

request(urlMovie, function (error, response, body) {
  if (error == null) {
    const mebody = JSON.parse(body);
    const characters = mebody.characters;

    if (characters && characters.length > 0) {
      const final = characters.length;
      ReqString(0, characters[0], characters, final);
    }
  } else {
    console.log(error);
  }
});

function ReqString(index, url, characters, final) {
  if (index === final) {
    return;
  }
  request(url, function (error, response, body) {
    if (!error) {
      const mebody = JSON.parse(body);
      console.log(mebody.name);
      index++;
      ReqString(indx, characters[idx], characters, final);
    } else {
      console.error('error:', error);
    }
  });
}