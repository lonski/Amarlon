--Spell: Shield
SPELL_ID = 5

DMG_PHYSICAL = 1
DMG_MISSILE  = 6

function onCast(caster, target)
	
	if caster:get():character():get() == nil then return false end

	duration = caster:get():character():get():getLevel() + 6

	local function playAnimation(actor)
		t = Target()
		t.x = actor:get():getX()
		t.y = actor:get():getY()

		animation = Blink("333366", 20, 20)
		animation:setLocation( t, t )
		animation:run()
	end

	local function addStatusEffect(actor)
		effect = StatusEffect(SPELL_ID, duration)
		return actor:get():getStatusEffects():add( effect )
	end

	local function applyModifiers(actor)
		c = actor:get():character():get()
		if c ~= nil then
			c:setArmorModifier( c:getArmorModifier(DMG_PHYSICAL) + 3, DMG_PHYSICAL )
			c:setArmorModifier( c:getArmorModifier(DMG_MISSILE)  + 6, DMG_MISSILE  )
		end
	end

	for a in target.actors do
		if addStatusEffect(a) then
			applyModifiers(a)
		end
		playAnimation(a)
	end

	return true
end

function onCancel(target)

	local function removeModifiers(actor)
		c = actor:get():character():get()
		if c ~= nil then
			c:setArmorModifier( c:getArmorModifier(DMG_PHYSICAL) - 3, DMG_PHYSICAL )
			c:setArmorModifier( c:getArmorModifier(DMG_MISSILE)  - 6, DMG_MISSILE  )
		end
	end

	for a in target.actors do
		removeModifiers(a)
	end

	return true
end