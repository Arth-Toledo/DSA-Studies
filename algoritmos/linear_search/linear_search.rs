pub fn linear_search(arr: Vec<i64>, target: i64) -> Option<usize>{
    for i in 0..(arr.len()){
        if arr[i] == target{
            return Some(i);
        }
    }
    return None;
}


pub fn main(){
    let arr =  vec![1,2,3,4,5,6,7,8,9,10];
    if let Some(idx) = linear_search(arr, 8){
        println!("{idx}")
    }else{
        println!("nor found")
    }
}