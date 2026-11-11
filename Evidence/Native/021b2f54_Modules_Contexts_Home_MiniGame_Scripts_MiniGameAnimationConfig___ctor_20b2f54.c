/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.MiniGameAnimationConfig$$.ctor
void Modules_Contexts_Home_MiniGame_Scripts_MiniGameAnimationConfig___ctor (Modules_Contexts_Home_MiniGame_Scripts_MiniGameAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.MiniGameAnimationConfig$$.ctor
   void Modules_Contexts_Home_MiniGame_Scripts_MiniGameAnimationConfig___ctor
   (Modules_Contexts_Home_MiniGame_Scripts_MiniGameAnimationConfig_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_MiniGameAnimationConfig___ctor_20b2f54(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar3 = _UNK_0438dc20;
  uVar2 = _UNK_0438dbc0;
  *(undefined8 *)(param_1 + 0x44) = _UNK_0438dbc8;
  *(undefined8 *)(param_1 + 0x3c) = uVar2;
  uVar2 = _UNK_0438dc28;
  *(undefined8 *)(param_1 + 0x98) = 0x293dcccccd;
  *(undefined8 *)(param_1 + 0x6c) = uVar3;
  uVar3 = _UNK_0438dc30;
  *(undefined4 *)(param_1 + 0x88) = 0x3e800000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  uVar4 = _UNK_0438dc38;
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  uVar3 = _UNK_0438dbd8;
  uVar2 = _UNK_0438dbd0;
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  uVar5 = _UNK_0438dbe8;
  uVar4 = _UNK_0438dbe0;
  *(undefined8 *)(param_1 + 0xfc) = uVar3;
  *(undefined8 *)(param_1 + 0xf4) = uVar2;
  uVar2 = _UNK_0438dc40;
  *(undefined8 *)(param_1 + 0xe8) = 0x3e4ccccd00000001;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x34) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x104) = 0x3e99999a3ecccccd;
  *(undefined8 *)(param_1 + 0x120) = uVar5;
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  *(undefined8 *)(param_1 + 0x168) = uVar2;
  *(undefined4 *)(param_1 + 0x170) = 0x3e4ccccd;
  if (cRam0000000005c230ac == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230ac = '\x01';
  }
  uVar3 = _UNK_0438dbf8;
  uVar2 = _UNK_0438dbf0;
  uVar1 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x20);
  *(undefined8 *)(param_1 + 0x174) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x18);
  *(undefined4 *)(param_1 + 0x17c) = uVar1;
  *(undefined8 *)(param_1 + 400) = uVar3;
  *(undefined8 *)(param_1 + 0x188) = uVar2;
  puVar6 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Object___ctor_23dfe5c(param_1,0);
  if (pcRam0000000005c3a3d8 == (code *)0x0) {
    pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
  }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a3d8)(param_1);
  return;
}

