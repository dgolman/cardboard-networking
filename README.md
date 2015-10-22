
# CardboardNetworking
This is a networking demo for Google Cardboard built in Unity 5.
It uses <a href="https://www.photonengine.com/en/PUN">the Photon Unity Networking tools</a> for server setup, lobby setup, and remote procedure call (RPC) handling.
<br>This method could also work for other hardware with minor modification.
## Setup Photon
First, <a href="https://www.photonengine.com/en/Account/SignUp">create a free Photon account.</a>
Once you have an account, go to your "Realtime Dashboard" and "Create a new realtime app".
Name it whatever you like, and return to the dashboard to see your new realtime app with appid (your appid will be a long string of numbers and letters).
<br>Note: As long as your app has < 20 concurrent users, Photon is free, with no other restrictions.



## Use in Unity
Open the included Unity project.
Select Assets>Photon Unity Networking>Resources>PhotonServerSettings in the inspector. <br>Paste your appid in the text box.
Check and make sure your settings indicate:<br>
Hosting: Photon Cloud<br>
Region: Us <br>
AppId: (your unique activated appid from Photon)<br>
Protocol: Udp<br>
Client Settings:<br>
Auto-Join Lobby (true)<br>
Enable Lobby Stats (false)<br>


Contact me anytime at seangkelly@nyu.edu for questions/comments.


## Credits
Thanks to:<br>
Hayden from Convrge<br>
Chris Kairalla<br>
The Google Cardboard Team<br>

## License
   Copyright 2015 Sean Kelly

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.






