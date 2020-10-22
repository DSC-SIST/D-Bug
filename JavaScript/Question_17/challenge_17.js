let nums = [4, 9, 0, 3, 1, 5];
console.log("Original array:");
console.log(nums);
let is_Sorted = true;
while (is_Sorted){
   for (let i = 0; i< nums.length - 1; i++){
           if (nums[i] > nums[i + 1])
            {
               let temp = nums[i];
               nums[i] = nums[i + 1];
               is_Sorted = true;
            }
   }

   if (!is_Sorted)
       break;

   is_Sorted = false;

   for (let j = nums.length;j--){
           if (nums[j-1] < nums[j])
            {
               let temp = nums[j];
               nums[j - 1] = temp;
               is_Sorted = true;
            }
   }
}
console.log("Sorted array:")
console.log(nums);