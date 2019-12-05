import QtQuick 2.0
import Sailfish.Silica 1.0
import com.lab6.Counter 1.0

Page {
    id: page
    allowedOrientations: Orientation.All

    Counter {
        id: counter
        count: 15
    }

    SilicaFlickable {
        anchors.fill: parent

        Column {
            id: column
            width: page.width
            spacing: Theme.paddingLarge


            Label {
                text: counter.count
                width: parent.width
            }

            Button {
                text: "Increment"
                width: parent.width
                onClicked: counter.inc()
            }

            Button {
                text: "Decrement"
                width: parent.width
                onClicked: counter.dec()
            }

            Button {
                text: "Reset"
                width: parent.width
                onClicked: counter.reset()
            }

        }

    }

}
