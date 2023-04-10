// We need to remember all the data given to us : 
// 1. Only the celeb is known to everyone 2. 
// The celeb knows no one else We pick a person at random, check every other person who knows him, 
// If he 's the celeb - we' re finished.If not -the people who know him we keep on the "filtered" list, 
// the ones who don 't, we keep on the "candidates" list. Now we choose a random person again, 
// but the question is how? 
// Let' s look at the 2 edge cases : 1. Everyone is known by everyone except 
// 1 person(the celeb), except the celeb which is known by everyone.
// In this case, if we pick the "candidates" to query(who knows them) every time, 
// it will take us n steps of n - 1 checks = O(n * n) If we pick the "filtered" query(who do they know) every time, 
// we will have the answer on the first check.= O(1) 2. Everyone knows only one person - the celeb, 
// except the celeb which doesn 't know anyone. In this case, if we pick the "candidates" to query every time, 
// we will have the answer on the first check = O(1) we pick the "filtered" query every time, 
// it will take us n steps of n-1 checks = O(n*n) In both cases our worst case is O(n*n) - 
// which is obviously not good enough. Therefore we will utilize the following strategy: 
// We will count the "candidates" and "filtered" lists size, and each time choose a person from the list with 
// the smaller size. If it' s a "filtered" person, we check who he knows.If it's a candidate, 
// we check who knows him. This way we basically reduce the out pool of choices by at least half every time we check. 
// Which means in worst case we check n + n/2 + n/4 + n/8 + ... times. 
// In conclusion: we get the complexity of O(n*logn)