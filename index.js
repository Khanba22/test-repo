const moment = require('moment');
const jsonfile = require('jsonfile');
const simpleGit = require('simple-git');
const FILE_PATH = './data.json';

async function makeCommits() {
  for (let index = 120; index < 125; index++) {
    if (Math.random() > 0.5) continue;

    const DATE = moment().subtract(index, "d").format();
    const data = { date: DATE };

    await jsonfile.writeFile(FILE_PATH, data);

    console.log("Committing");
    const res = await simpleGit().add([FILE_PATH]).commit(DATE, { "--date": DATE });
    console.log(res)
    console.log("Commit Successful");
    await new Promise((resolve) => setTimeout(resolve, 1000));
  }
}

makeCommits();