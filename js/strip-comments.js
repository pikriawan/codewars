/**
 * Tanggal: 9 September 2026
 * Link: https://www.codewars.com/kata/51c8e37cee245da6b40000bd/solutions/javascript
 */

function stripComments(text, markers) {
    return text
        .split("\n")
        .map((line) => {
            const markerIndexes = markers.map((marker) => line.indexOf(marker));
            const firstMarkerIndex = Math.min(...markerIndexes.filter((i) => i !== -1));

            if (firstMarkerIndex !== Infinity) {
                return line.substring(0, firstMarkerIndex).trimEnd();
                
            }

            return line.trimEnd();
        })
        .join("\n");
}

console.log(stripComments("apples, pears # and bananas\ngrapes\nbananas !apples", ["#", "!"]));
