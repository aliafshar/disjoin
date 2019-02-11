



import jinja2



tvars = dict(
    SYNTH_COUNT_NAME = 'SYNTH_COUNT',
    SYNTH_COUNT = 4,
    ENVS_NAME = '_senv',
    WAVS_NAME = '_wavs',
    MIXS_NAME = '_mix',
    SYNTH_VOICES_COUNT_NAME = 'SYNTH_VOICES_COUNT',
    SYNTH_VOICES_COUNT = 16,
    MIX1_COUNT_NAME = 'MIX1_COUNT',
    MIX2_COUNT_NAME = 'MIX2_COUNT',
    MIX1_COUNT = 4,
    MIX2_COUNT = 1,
)

TEMPLATE = """
// begin automatically generated


#define {{ SYNTH_COUNT_NAME }} {{ SYNTH_COUNT }}
#define {{ SYNTH_VOICES_COUNT_NAME }} {{ SYNTH_VOICES_COUNT }}
#define {{ MIX1_COUNT_NAME }} {{ MIX1_COUNT }}
#define {{ MIX2_COUNT_NAME }} {{ MIX2_COUNT }}

AudioSynthWaveform      {{ WAVS_NAME }}[{{ SYNTH_COUNT_NAME }}][{{ SYNTH_VOICES_COUNT_NAME }}];
AudioEffectEnvelope     {{ ENVS_NAME }}[{{ SYNTH_COUNT_NAME }}][{{ SYNTH_VOICES_COUNT_NAME }}];
AudioMixer4             {{ MIXS_NAME }}1[{{ SYNTH_COUNT_NAME }}][{{ MIX1_COUNT_NAME }}]; 
AudioMixer4             {{ MIXS_NAME }}2[{{ SYNTH_COUNT_NAME }}]; 
AudioEffectEnvelope     _envs[{{SYNTH_COUNT_NAME}}];
AudioFilterBiquad       _flt1[{{SYNTH_COUNT_NAME}}];
AudioEffectFreeverb     _reve[{{SYNTH_COUNT_NAME}}];
AudioFilterBiquad       _flt2[{{SYNTH_COUNT_NAME}}];
AudioMixer4             {{ MIXS_NAME }}3;
AudioMixer4             {{ MIXS_NAME }}g;
AudioOutputI2S          _audio_out;
AudioControlSGTL5000    _dac;

AudioConnection _envs_conn[] = {
{%- for i in range(SYNTH_COUNT) %}
    {%- for j in range(SYNTH_VOICES_COUNT) %}
    { {{WAVS_NAME}}[{{i}}][{{j}}], {{ENVS_NAME}}[{{i}}][{{j}}] },
    {%- endfor %}
{%- endfor %}
};

AudioConnection _mix1_conn[] = {
{%- for i in range(SYNTH_COUNT) %}
    {%- for j in range(MIX1_COUNT) %}
        {%- for h in range(4) %}
    { {{ ENVS_NAME }}[{{i}}][{{j * 4 + h}}], 0, {{ MIXS_NAME }}1[{{i}}][{{j}}], {{h}} },
        {%- endfor %}
    {%- endfor %}
{%- endfor %}
};

AudioConnection _mix2_conn[] = {
{%- for i in range(SYNTH_COUNT) %}
    {%- for j in range(MIX2_COUNT) %}
        {%- for h in range(4) %}
    { {{ MIXS_NAME }}1[{{i}}][{{j * 4 + h}}], 0, {{ MIXS_NAME}}2[{{i}}], {{ h }} },
        {%- endfor %}
    {%- endfor %}
{%- endfor %}
};

AudioConnection _mix3_conn[] = {
{%- for i in range(SYNTH_COUNT) %}
    { {{ MIXS_NAME }}2[{{i}}], _envs[{{i}}] },
{%- endfor %}
{%- for i in range(SYNTH_COUNT) %}
    { _envs[{{i}}], _flt1[{{i}}] },
{%- endfor %}
{%- for i in range(SYNTH_COUNT) %}
    { _flt1[{{i}}], _reve[{{i}}] },
{%- endfor %}
{%- for i in range(SYNTH_COUNT) %}
    { _reve[{{i}}], _flt2[{{i}}] },
{%- endfor %}
{%- for i in range(SYNTH_COUNT) %}
    { _flt2[{{i}}], 0, {{ MIXS_NAME }}3, {{i}} },
{%- endfor %}
};

AudioConnection _mixg_conn[] = {
    { {{ MIXS_NAME }}3, 0, {{ MIXS_NAME }}g, 0 },
    { {{ MIXS_NAME }}g, 0, _audio_out, 0 },
    { {{ MIXS_NAME }}g, 0, _audio_out, 1 },
};

// end automatically generated
"""

def main():
    t = jinja2.Template(TEMPLATE)
    print t.render(**tvars)

if __name__ == '__main__':
    main()
