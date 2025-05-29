const jsonfile = require('jsonfile');
const moment = require('moment');
const simpleGit = require('simple-git');

const FILE_PATH = './data.json';

const DATE = moment().format();

const data = {
    date: DATE
};

jsonfile.writeFile(FILE_PATH, data);

console.log("Commiting")
simpleGit().add([FILE_PATH]).commit(DATE,{'--date': DATE})
console.log("Commit Successful")
//terminal me directory algopath me jake node index.js run krna 
//subtract ke aage ktte din pehle krna h uska count likhna 
//refresh github evrytime 