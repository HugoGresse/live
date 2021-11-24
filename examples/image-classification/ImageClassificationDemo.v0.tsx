import * as React from 'react';
import {Text, View} from 'react-native';
import {useSafeAreaInsets} from 'react-native-safe-area-context';

export default function ImageClassificationDemo() {
  // Get safe area insets to account for notches, etc.
  const insets = useSafeAreaInsets();
  return (
    <View style={{marginTop: insets.top, marginBottom: insets.bottom}}>
      <Text>Image Classification</Text>
    </View>
  );
}
