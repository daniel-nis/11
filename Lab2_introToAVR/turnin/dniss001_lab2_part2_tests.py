tests = [ {'description': 'PINA: 0x00 => PORTC: 0x00',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTC',0x00)],
    },

    {'description': 'PINA: 0x01 => PORTC: 0x01',
    'steps': [ {'inputs': [('PINA',0x01)], 'iterations': 5 } ],
    'expected': [('PORTC',0x01)],
    },

    {'description': 'PINA: 0x03 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x03)], 'iterations': 5 } ],
    'expected': [('PORTC',0x03)],
    },

 
    ]
#watch = ['PORTB']
