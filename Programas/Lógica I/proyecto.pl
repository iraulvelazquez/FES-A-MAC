% -------------------------------------------------------------------------
% BASE DE CONOCIMIENTO (Hechos)
% -------------------------------------------------------------------------

% 1. Los Sospechosos
sospechoso(coronel_mostaza).
sospechoso(srta_escarlata).
sospechoso(profesor_plum).
sospechoso(sra_blanco).

% 2. Las Armas
arma(candelabro).
arma(cuchillo).
arma(tubería).
arma(revolver).

% 3. Las Habitaciones
habitacion(cocina).
habitacion(biblioteca).
habitacion(salon).
habitacion(estudio).

% -------------------------------------------------------------------------
% EL ESCENARIO (Las pistas que hemos encontrado)
% -------------------------------------------------------------------------

% Ubicación de los sospechosos (¿Dónde estaba cada uno?)
estaba_en(coronel_mostaza, biblioteca).
estaba_en(srta_escarlata, cocina).
estaba_en(profesor_plum, salon).
estaba_en(sra_blanco, estudio).

% Ubicación de las armas (¿Dónde se encontró cada arma?)
arma_en(candelabro, cocina).
arma_en(cuchillo, biblioteca).
arma_en(tubería, salon).
arma_en(revolver, estudio).

% -------------------------------------------------------------------------
% EL CRIMEN (La "Carta del Sobre")
% -------------------------------------------------------------------------
% Sabemos por evidencia forense dónde ocurrió y con qué arma.
crimen_lugar(biblioteca).
crimen_arma(cuchillo).

% -------------------------------------------------------------------------
% REGLAS DE DEDUCCIÓN (Silogismos)
% -------------------------------------------------------------------------

% REGLA 1: Falso sospechoso (Coartada de lugar)
% Un sospechoso es inocente si estaba en una habitación diferente a la del crimen.
es_inocente(Persona) :-
    sospechoso(Persona),
    estaba_en(Persona, HabitacionPersona),
    crimen_lugar(HabitacionCrimen),
    HabitacionPersona \= HabitacionCrimen.

% REGLA 2: Falso sospechoso (Coartada de arma)
% Un sospechoso es inocente si el arma que estaba en su habitación NO es el arma del crimen.
% (Asumimos que el asesino usó el arma que estaba a su alcance inmediato).
es_inocente(Persona) :-
    sospechoso(Persona),
    estaba_en(Persona, Habitacion),
    arma_en(Arma, Habitacion),
    crimen_arma(ArmaCrimen),
    Arma \= ArmaCrimen.

% REGLA MAESTRA: El Asesino
% Silogismo:
% 1. El asesino debe ser un sospechoso.
% 2. El asesino debe haber estado en la habitación del crimen.
% 3. El arma del crimen debe haber estado en esa misma habitación.
% 4. Si se cumplen las anteriores, entonces X es el asesino.

es_asesino(Persona) :-
    sospechoso(Persona),                % Premisa 1
    crimen_lugar(LugarDelCrimen),
    estaba_en(Persona, LugarDelCrimen), % Premisa 2
    crimen_arma(ArmaDelCrimen),
    arma_en(ArmaDelCrimen, LugarDelCrimen). % Premisa 3

% -------------------------------------------------------------------------
% UTILIDAD PARA MOSTRAR LA SOLUCIÓN
% -------------------------------------------------------------------------

resolver_caso :-
    es_asesino(X),
    crimen_lugar(Lugar),
    crimen_arma(Arma),
    write('-----------------------------------------'), nl,
    write('INFORME DEL DETECTIVE:'), nl,
    write('El crimen ocurrió en: '), write(Lugar), nl,
    write('El arma utilizada fue: '), write(Arma), nl,
    write('-----------------------------------------'), nl,
    write('DEDUCCION LOGICA:'), nl,
    write('El culpable es: '), write(X), nl,
    write('-----------------------------------------').
