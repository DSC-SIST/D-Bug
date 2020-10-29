function diffArray(arr1, arr2) {
    arr = arr1.concat(arr2)
    return arr.filter(item => (arr1.includes(item) && !arr2.includes(item)) || (!arr1.includes(item) && arr2.includes(item)));
    }
    
    // It should return [4]
    console.log(diffArray([1, 2, 3, 5], [1, 2, 3, 4, 5]));
    
    // It should return ['pink wool']
    console.log(diffArray(["diorite", "andesite", "grass", "dirt", "pink wool", "dead shrub"], ["diorite", "andesite", "grass", "dirt", "dead shrub"]));
    
    