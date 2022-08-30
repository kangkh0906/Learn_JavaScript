// Spread Syntax - Object
const item = { type: "shirt", size: "M" };
const detail = { price: 20, made: "Korea", gender: "M" };

// bad
item["price"] = detail.price;

// bad
const newObject = new Object();
newObject["type"] = item.type;
newObject["size"] = item.size;
newObject["price"] = item.price;
newObject["made"] = item.made;
newObject["gender"] = item.gender;

// bad
const newObject2 = {
  type: item.type,
  size: item.size,
  price: item.price,
  made: item.made,
  gender: item.gender,
};

// good
const shirt0 = Object.assign(item, detail);

// better
const shirt = { ...item, ...detail, price: 40 };
