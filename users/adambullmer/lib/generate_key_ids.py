def print_registers(all_keys):
    #Loop through all_keys to do the calculation
    for key_group_name, key_group_keys in all_keys.items():
        registers = [0,0,0,0]
        for led in key_group_keys:
            nled = led -1
            id = nled // 32
            element = nled % 32
            value = 2 ** element
            registers[id] = registers[id] + value
        print(f'// {key_group_name} = {key_group_keys}')
        print(f'#define LED_IDS_{key_group_name.upper()} .id0 = {registers[0]}, .id1 = {registers[1]}, .id2 = {registers[2]}, .id3 = {registers[3]}')

dark_grey = [1,6,7,8,9,14,15,16,17,30,31,32,33,34,47,48,49,50,51,63,64,75,76,77,78,79,81,82,83,84,85,86,87]
light_grey = [2,3,4,5,10,11,12,13,18,19,20,21,22,23,24,25,26,27,28,29,35,36,37,38,39,40,41,42,43,44,45,46,52,53,54,55,56,57,58,59,60,61,62,65,66,67,68,69,70,71,72,73,74,80]

border = range(88,120)
border_light_grey = [105,106,107,108,111,112,113,114]
border_dark_grey = [91,92,93,98,99,100,101,102,103,109,110,115,116,117,118]
border_accent = [88,89,90,94,95,96,97,104,119]
esc = [1]
fn = [82]
fn_db = [82,83]
wasd = [36,52,53,54]
arrow = [76,85,86,87]
accent = [1,30,63,75,76,80,85,86,87]
alphanumeric = [18,19,20,21,22,23,24,25,26,27,28,29,35,36,37,38,39,40,41,42,43,44,45,46,52,53,54,55,56,57,58,59,60,61,62,65,66,67,68,69,70,71,72,73,74]
function = range(2,17)
function_light_grey = [2,3,4,5,10,11,12,13]
function_dark_grey = [6,7,8,9,14,15,16]
layout_selectors = range(18,28)
layout_shifters = range(28,30)
style_selectors = range(40,45)
style_shifters = range(45,47)
system_controls = [30,63]
media_controls = [31,32,33,48,49,50]
led_controls = [34,35,36,37,38,51,52,53,54,65,66,67,76,85,86,87]
qmk_controls = [1,69,70,71]
debug_controls = [1,35,36,37]
git_keys = [36,37,38,39,42,45,46,52,53,54,55,60,66,67,68,69,70,71,72]
vim_leader_keys = [47,79]
vim_command_keys = [29,35,38,40,41,42,43,44,52,53,66,67,68,72,73]
vim_arrow_keys = range(57,61)
vim_important_keys = [1,51,61]

# Now using the "for instance" arrays, putting them into a dict. Again, modify this based on your needs.
# However recommend doing it as a dict so the output is easier to parse, even if you only have one array
all_keys = {
    "dark_grey": dark_grey,
    "light_grey": light_grey,
    "border": border,
    "border_light_grey": border_light_grey,
    "border_dark_grey": border_dark_grey,
    "border_accent": border_accent,
    "fn": fn,
    "fn_db": fn_db,
    "esc": esc,
    "wasd": wasd,
    "arrow": arrow,
    "accent": accent,
    "alphanumeric": alphanumeric,
    "function": function,
    "function_light_grey": function_light_grey,
    "function_dark_grey": function_dark_grey,
    "layout_selectors": layout_selectors,
    "layout_shifters": layout_shifters,
    "style_selectors": style_selectors,
    "style_shifters": style_shifters,
    "system_controls": system_controls,
    "media_controls": media_controls,
    "led_controls": led_controls,
    "qmk_controls": qmk_controls,
    "debug_controls": debug_controls,
    "git_keys": git_keys,
    "vim_leader_keys": vim_leader_keys,
    "vim_command_keys": vim_command_keys,
    "vim_arrow_keys": vim_arrow_keys,
    "vim_important_keys": vim_important_keys,
}
print_registers(all_keys)
