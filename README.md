# TDW_GameplayTest

### Initial Planning
*This planning was made Feb 11 based on the requirements provided*
- We require one or more AttributeSets that will hold the required attributes for Leap Slam to work.
	- We could create, for example, a CombatAttributeSet for AttackSpeed and AttackPower, HealthAttributeSet for Health / Max Health, and perhaps a StatAttributeSet for Mana and MaxMana.
	- I personally don't see much problem in using a single AttributeSet for this particular project, at most if we needed to use the ASC for something that only has Health or doesn't use Mana for some reason, we could just have everything zeroed and that should work fine for now.
- In general we'll require:
	- A dummy GAS character that should receive damage (and die, also preferably receive knockback from the Leap Slam)
	- A simple healthbar widget component to properly display what is happening
	- The AttributeSets described above
	- Damage Calculation done through DamageExecution
	- Effects for damage and "Init" Effects for initial stats (Health, AttackPower, AttackSpeed, etc.)
	- Abilities for: 
		- Leap Slam
	- Cost (Mana) and Cooldown effects
	- Adapt the default topdown to use WASD instead of mouse controls.
	- Some sort of aiming / preview system so that the player can see where he is going to leap.
- I plan to implement in C++ the following:
	- AttributeSet(s)
	- DamageExecution
	- Modifications to TDW_GameplayTestPlayerController so it supports WASD
	- Add AbilitySystemComponent to GameplayTestCharacter, inherit from it and create the Player and the Dummy classes