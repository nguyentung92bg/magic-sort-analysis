/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WinParticle$$SetColorOverLifetime
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOverLifetime (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle_o* __this, System_Collections_Generic_IEnumerable_ParticleSystem__o* particles, UnityEngine_Gradient_o* color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024006b0) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.WinParticle$$SetColorOverLifetime
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOverLifetime
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle_o* __this,
   System_Collections_Generic_IEnumerable_ParticleSystem__o* particles, UnityEngine_Gradient_o*
   color, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WinParticle__SetColorOverLifetime_2300438
               (undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c2a60d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_0576d148);
    FUN_012d0dc8(PTR_DAT_057ed1c0);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    bRam0000000005c2a60d = 1;
  }
  uStack_38 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0576d148) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_024004f0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0131971c(param_2,*(long *)PTR_DAT_0576d148,0);
LAB_024004f0:
  puVar3 = PTR_DAT_058165e8;
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = PTR_DAT_057ed1c0;
  puVar1 = PTR_DAT_057a12b8;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  do {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02400568;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar1,0);
LAB_02400568:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 == 0) goto LAB_02400664;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_024005c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_024005c4:
    lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_38 = UnityEngine_ParticleSystem__get_colorOverLifetime_3abc930(lVar6,0);
    UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_enabled_3abd018(&uStack_38,1,0);
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_3abd408(&uStack_70,param_3,0);
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    uStack_80 = uStack_40;
    UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color_3abd0a0(&uStack_38,&uStack_b0,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02400680;
    }
  }
LAB_02400664:
  puVar4 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar3,0);
LAB_02400680:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}

