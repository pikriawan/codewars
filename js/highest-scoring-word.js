/**
 * Tanggal: 14 September 2026
 * Link: https://www.codewars.com/kata/57eb8fcdf670e99d9b000272/train/javascript
 */

function highestScoringWord(string) {
    const words = string.split(" ").map((word) => {
        let score = 0;

        for (let i = 0; i < word.length; i++) {
            score += parseInt(word.charCodeAt(i)) - parseInt("a".charCodeAt(0)) + 1;
        }

        return { word, score };
    });

    let maxScore = words[0].score;

    for (const word of words) {
        if (word.score > maxScore) {
            maxScore = word.score;
        }
    }

    return words.find((word) => word.score === maxScore).word;
}

console.log(highestScoringWord("what time are we climbing up the volcano"));
