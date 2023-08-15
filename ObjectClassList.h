struct ObjectDetectionItem {
  uint8_t index;
  const char* objectName;
  uint8_t filter;
  int Price;
};

// List of objects the pre-trained model is capable of recognizing
// Index number is fixed and hard-coded from training
// Set the filter value to 0 to ignore any recognized objects
ObjectDetectionItem itemList[6] = {
  { 0, "Bread", 1 ,15},
  { 1, "Croissant", 1,45 },
  { 2, "Hamburger", 1,52 },
  { 3, "Toast", 1,3 },
  { 4, "Sandwich", 1,28 },
  { 5, "Round", 1,26 }
};